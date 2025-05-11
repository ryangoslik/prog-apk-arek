<?php 
$conn = mysqli_connect('localhost', 'root',
'', 'motory');
if(!$conn){
die("Blad polaczenia: " . mysqli_connect_error());
}


$zapytanie = "SELECT wycieczki.nazwa, wycieczki.poczatek, wycieczki.opis, zdjecia.zrodlo FROM wycieczki JOIN zdjecia ON wycieczki.zdjecia_id = zdjecia.id";
$wynik = mysqli_query($conn, $zapytanie);
?>


<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Motocykle</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <img src="motor.png" alt="motocykl" srcset="">

<nav class="baner"><h1><i>Motocykle - moja pasja</i></h1></nav>

<main>
<div class="left"><h2><i>Gdzie pojechać?</i></h2>
<?php 
if ($wynik->num_rows > 0) {
    echo "<dl>";
    while($row = $wynik->fetch_assoc()) {
        echo "<dt>";
        echo ($row['nazwa']) . ", rozpoczyna się w " . ($row['poczatek']) . ", ";
        echo "<a href='img/" . ($row['zrodlo']) . ".jpg'>zobacz zdjęcie</a>";
        echo "</dt>";
        echo "<dd>" . nl2br(($row['opis'])) . "</dd>";
    }
    echo "</dl>";
} else {
    echo "Brak danych do wyświetlenia.";
}
?>
</div>

<div class="right">
    <div class="prawy1"><h2>Co kupić?</h2>
    <ol>
    <li>Honda CBR125R</li>
    <li>Yamaha YBR125</li>
    <li>Honda VFR800i</li>
    <li>Honda CBR1100XX</li>
    <li>BMW R1200GS LC</li>
    </ol>
</div>
    
    <div class="prawy2"><h2>Statystyki</h2>
    <p>Wpisanych wycieczek: 
    <?php 
    $query = "SELECT COUNT(*) AS liczba_wycieczek FROM `wycieczki`";
    $result = mysqli_query($conn, $query);
    if ($result) {
        $row = mysqli_fetch_assoc($result);
        echo $row['liczba_wycieczek'];
    } else {
        echo "Błąd zapytania.";
    }
    $conn->close();
    ?>
    </p>
    <p>Użytkowników forum: 200</p>
    <p>Przesłanych zdjęć: 1300</p>

</div>
</div>
</main>

    <footer>Stronę wykonał: 0000000000</footer>

</body>
</html>