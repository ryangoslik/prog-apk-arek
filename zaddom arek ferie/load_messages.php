<?php
if (file_exists("messages.txt")) {
    $messages = file("messages.txt", FILE_IGNORE_NEW_LINES);
    foreach ($messages as $msg) {
        echo "<li>" . htmlspecialchars($msg) . "</li>";
    }
}
?>
