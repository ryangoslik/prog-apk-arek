<?php
include_once('db.php');
$cat_result = $conn->query("SELECT DISTINCT cat FROM products");
$selected_cat = isset($_POST['cat']) ? $_POST['cat'] : null;
if ($selected_cat) {
    $query = "SELECT name, img FROM products WHERE cat = '$selected_cat'";
} else {
    $query = "SELECT name, img FROM products";
}
$result = $conn->query($query);
$products = $result ? $result->fetch_all(MYSQLI_ASSOC) : [];
?>
<!DOCTYPE html>
<html>
<head>
    <title>SwagShop.com</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
<header><h1><a href='index.php'>SWAG SHOP</a></h1></header>
    <h2>Odzież i akcesoria</h2>
    <main>
    <div class="box">
    <div class="heading">
        <h2>
        <?php
    if ($selected_cat) {
        if ($selected_cat == 'kat1') $cat_name = 'Buty';
        elseif ($selected_cat == 'kat2') $cat_name = 'Bluzy';
        elseif ($selected_cat == 'kat3') $cat_name = 'Akcesoria';
        else $cat_name = $selected_cat;

        echo "Produkty z kategorii: " . htmlspecialchars($cat_name);
    } else {
        echo "Wszystkie produkty";
    }
    ?>
        </h2>
    </div>
    <div class="filter-form">
    <form method="POST" action="">
        <p>Filtruj według kategorii</p>
        <select name="cat" onchange="this.form.submit()">
            <option value="">- Wszystkie produkty -</option>
            <?php while ($row = $cat_result->fetch_assoc()): ?>
                <?php
                    $cat = $row['cat'];
                    if ($cat == 'kat1') $cat_name = 'Buty';
                    elseif ($cat == 'kat2') $cat_name = 'Bluzy';
                    elseif ($cat == 'kat3') $cat_name = 'Akcesoria';
                    else $cat_name = $cat;
                ?>
                <option value="<?= $cat ?>" <?= $selected_cat == $cat ? 'selected' : '' ?>>
                    <?= $cat_name ?>
                </option>
            <?php endwhile; ?>
        </select>
    </form>
</div>
</div>
    <?php if (!empty($products)): ?>
        <ul>
            <?php foreach ($products as $product): ?>
                <li>
                    
                    <img src="<?= $product['img'] ?>" alt="<?= $product['name'] ?>" width="150"><br>
                    <p><?= $product['name'] ?></p>
                </li>
            <?php endforeach; ?>
        </ul>
    <?php else: ?>
        <p>Brak produktów do wyświetlenia.</p>
    <?php endif; ?>
</main>
</body>
</html>
