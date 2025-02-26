<?php
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["message"])) {
    $message = htmlspecialchars($_POST["message"]);
    file_put_contents("messages.txt", $message . "\n", FILE_APPEND);
}
?>
