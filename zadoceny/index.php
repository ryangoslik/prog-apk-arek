<?php
include_once("db.php");
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zadanko</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <form method="POST">
        <div class="inside"><label>Wybierz przedmiot:</label>
        <select name="subject" id="subject">
            <option value="angielski">Angielski</option>
            <option value="fizyka">Fizyka</option>
            <option value="matematyka">Matematyka</option>
            <option value="polski">Polski</option>
            <option value="wf">WF</option>
        </select>
        <button type="submit">Oblicz średnią</button></div>
        <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["subject"])) {
        $subject = $_POST["subject"];
        $sql = "SELECT AVG(ocena) AS srednia FROM `$subject`";
        $result = $conn->query($sql);
        if ($result->num_rows > 0) {
            $row = $result->fetch_assoc(); 
            $srednia = number_format($row["srednia"],2); 
            
            echo "<p>Średnia ocen dla przedmiotu $subject: $srednia</p>";
        } else {
            echo "<p>Brak ocen w tabeli $subject.</p>";
        }
    }
    ?>
    </form>

    
</body>
</html>