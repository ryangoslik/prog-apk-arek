<?php 
include_once('db.php');
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <title>Wybór przedmiotów szkolnych</title>
    <link rel="stylesheet" href="style.css">
    <style>
        body {
            display: flex;
        }

        .sidebar {
            width: 250px;
            padding: 20px;
            border-right: 1px solid #ddd;
        }

        .content {
            flex: 1;
            padding: 20px;
        }
        .content {
            margin-left: 20px;
        }
    </style>
</head>
<body>

    <div class="sidebar">
        <h2>Przedmioty</h2>
        <form method="POST">
        <?php 
            if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST['subjects'])) {
                foreach ($_POST['subjects'] as $subject) {
                    $subject_clean = $conn->real_escape_string($subject);
                    $conn->query("INSERT INTO zajecia (nazwa) VALUES ('$subject_clean')");
                }
            }
        ?>
            <div class="checkbox-group">
                <label><input type="checkbox" name="subjects[]" value="Matematyka"> Matematyka</label><br>
                <label><input type="checkbox" name="subjects[]" value="Fizyka"> Fizyka</label><br>
                <label><input type="checkbox" name="subjects[]" value="Informatyka"> Informatyka</label><br>
                <label><input type="checkbox" name="subjects[]" value="Biologia"> Biologia</label><br>
                <label><input type="checkbox" name="subjects[]" value="Chemia"> Chemia</label><br>
                <label><input type="checkbox" name="subjects[]" value="Język polski"> Język polski</label><br>
                <label><input type="checkbox" name="subjects[]" value="Język angielski"> Język angielski</label><br>
            </div>

            <div class="checkbox-group">
                <h3>Nowo dodane:</h3>
                <?php
                $sql = "SELECT nazwa FROM zajecia";
                $result = $conn->query($sql);
                if ($result->num_rows > 0) {
                    while ($row = $result->fetch_assoc()) {
                        $name = htmlspecialchars($row['nazwa']);
                        echo "<label><input type='checkbox' name='subjects[]' value='$name'> $name</label><br>";
                    }
                } else {
                    echo "Brak zajęć w bazie.";
                }
                ?>
            </div>

            <input type="submit" value="OK">
        </form>
    </div>

    <div class="content">
        <h2>lista:</h2>
        <?php
        $sql = "SELECT DISTINCT nazwa FROM zajecia ORDER BY nazwa ASC";
        $result = $conn->query($sql);
        if ($result->num_rows > 0) {
            while ($row = $result->fetch_assoc()) {
                $name = htmlspecialchars($row['nazwa']);
                echo "<li>$name</li>";
            }
        } else {
            echo "Brak zajęć w bazie.";
        }
        ?>
    </div>

</body>
</html>

<?php 
$conn->close();
?>
