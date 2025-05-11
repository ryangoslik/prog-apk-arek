<?php 
$conn = mysqli_connect('localhost','root','','rzeki');
if(!$conn){
        die("Blad polaczenia: " . mysqli_connect_error());
    }
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Poziomy rzek</title>
    <link rel="stylesheet" href="styl.css">
</head>
<body>
<div class="banerMain">
    <div class="baner1"><img src="obraz1.png" alt="Mapa Polski" srcset=""></div>
    <div class="baner2"><h1>Rzeki w województwie
    dolnośląskim</h1></div>
</div>
<nav>
    <form action="" method="POST">
    <label for="r1" class="labelka">
    <input type="radio" name="radio" id="r1" value="r1" checked>
    Wszystkie</label>
    <label for="r2" class="labelka">
    <input type="radio" name="radio" id="r2" value="r2">
    Ponad stan ostrzegawczy</label>
    <label for="r3" class="labelka">
    <input type="radio" name="radio" id="r3" value="r3">
    Ponad stan alarmowy</label>
    <button type='submit'>Pokaz</button>
</form></nav>
<main>
<div class="left"><h3>Stany na dzień 2022-05-05</h3>
<table><tr><th>Wodomierz</th><th>Ostrzegawczy</th><th>Alarmowy</th><th>Aktualny</th></tr>

<?php
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $query = "";

    if (isset($_POST['radio'])) {
        if ($_POST['radio'] === 'r1') {
            $query = "SELECT wodowskazy.nazwa, wodowskazy.rzeka, wodowskazy.stanOstrzegawczy, wodowskazy.stanAlarmowy, pomiary.stanWody 
                      FROM wodowskazy 
                      JOIN pomiary ON pomiary.wodowskazy_id = wodowskazy.id 
                      WHERE pomiary.dataPomiaru = '2022-05-05'";
        } elseif ($_POST['radio'] === 'r2') {
            $query = "SELECT wodowskazy.nazwa, wodowskazy.rzeka, wodowskazy.stanOstrzegawczy, wodowskazy.stanAlarmowy, pomiary.stanWody 
                      FROM wodowskazy 
                      JOIN pomiary ON pomiary.wodowskazy_id = wodowskazy.id 
                      WHERE pomiary.dataPomiaru = '2022-05-05' 
                      AND pomiary.stanWody > wodowskazy.stanOstrzegawczy";
        } elseif ($_POST['radio'] === 'r3') {
            $query = "SELECT wodowskazy.nazwa, wodowskazy.rzeka, wodowskazy.stanOstrzegawczy, wodowskazy.stanAlarmowy, pomiary.stanWody 
                      FROM wodowskazy 
                      JOIN pomiary ON pomiary.wodowskazy_id = wodowskazy.id 
                      WHERE pomiary.dataPomiaru = '2022-05-05' 
                      AND pomiary.stanWody > wodowskazy.stanAlarmowy";
        }
    }
    if(!empty($query)){
    $result = mysqli_query($conn,$query);
    if($result){
        while($row = mysqli_fetch_assoc($result)){
            echo"<tr>";
            echo"<td>$row[nazwa]</td>";
            echo"<td>$row[stanOstrzegawczy]</td>";
            echo"<td>$row[stanAlarmowy]</td>";
            echo"<td>$row[stanWody]</td>";
            echo"</tr>";
        }
    }
}
}
?>

</table></div>
<div class="right"><h3>Infromacje</h3><ul><li>Brak ostrzeżeń o burzach
z gradem</li>
<li>Smog w mieście Wrocław</li>
<li>Silny wiatr w Karkonoszach</li></ul><h3>Średnie stany wód</h3>
<?php
$query = "SELECT dataPomiaru, AVG(stanWody) AS sredniStanWody
FROM pomiary
GROUP BY dataPomiaru;";

$resultAVG = mysqli_query($conn,$query);
if($resultAVG){
    while($row = mysqli_fetch_assoc($resultAVG)){
        echo "<p>{$row['dataPomiaru']}: {$row['sredniStanWody']}</p>";
    }
}
$conn->close();
?>
<a href="https://komunikaty.pl">Dowiedz się więcej</a><!--<br>-->
<img src="obraz2.jpg" alt="rzeka" srcset="">
</div>
</main>
    <footer><p>Stronę wykonał: skurczypierd</p></footer>
</body>
</html>