<?php 
$conn = mysqli_connect('localhost','root','','galeria');
if(!$conn){
    die("Blad polaczenia: " . mysqli_connect_error());
}
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="styl.css">
    <title>Galeria</title>
</head>
<body>
    
    <nav><h1>Zdjęcia</h1></nav>
<div class="mainsr">
    <aside>
<h2>Tematy zdjęć</h2>
<ol>
    <li>Zwierzęta</li>
    <li>Krajobrazy</li>
    <li>Miasta</li>
    <li>Przyroda</li>
    <li>Samochody</li>
</ol>
    </aside>

    <main>
    <?php 
    $query = "Select tytul,plik,polubienia,autorzy.imie,autorzy.nazwisko FROM zdjecia JOIN autorzy ON zdjecia.autorzy_id = autorzy.id order by autorzy.nazwisko asc";

    $result = mysqli_query($conn,$query);

    if($result-> num_rows > 0){
        while($row = $result->fetch_assoc()){
            $plik = $row["plik"];
            $tytul = $row["tytul"];
            $polubienia = (int)$row["polubienia"];
            $imie = $row["imie"];
            $nazwisko = $row["nazwisko"];

            echo "<div class='blok-zdjecia'>";
            echo "<img src='$plik' alt='zdjęcie'>";
            echo "<h3>$tytul</h3>";

            if ($polubienia > 40) {
                echo "<p>Autor: $imie $nazwisko. Wiele osób polubiło ten obraz.<br></p>";
            } else {
                echo "<p>Autor: $imie $nazwisko</p>";
            }
    
            echo "<a href='$plik' download>Pobierz</a>";
            echo "</div>";
        }
    } else {
        echo "Brak zdjęć do wyświetlenia.";
    }
    
    ?>
    </main>


    <aside>
    <h2>Najbardziej lubiane</h2>
    <?php 
    $query = "SELECT plik, tytul FROM zdjecia where polubienia >= 100;";
    $result = mysqli_query($conn,$query);
    if($result-> num_rows > 0){
        while($row = $result->fetch_assoc()){
            $plik = $row["plik"];
            $tytul = $row["tytul"];
            echo "<div class='blok-zdjecia1'>";
            echo "<img src='$plik' alt='zdjęcie'><br>";
        }}
        $conn->close();
    ?>
    <strong>Zobacz wszystkie nasze zdjęcia</strong>
    </aside>

    </div>
    <footer>
<h5>Stronę wykonał:0000000000</h5>
    </footer>
    
</body>
</html>