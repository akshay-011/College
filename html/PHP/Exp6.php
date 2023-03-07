<!DOCTYPE html>
<html lang="en">
<head>
    <title>Bio Data</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="biodata">

    <?php
    $name = $_POST['name'];
    $dob = $_POST['dob'];
    $address = $_POST['address'];
    $gender = $_POST['gender'];
    $dist = $_POST['district'];
    
    echo "<h1>Details</h1>";
    echo "<h3>Name    : $name</h3>";
    echo "<h3>DoB     : $dob</h3>";
    echo "<h3>Address : $address</h3>";
    echo "<h3>gender  : $gender</h3>";
    echo "<h3>Qualificatio are</h3>";
    foreach ($_POST['quali'] as $option) {
        echo " $option ";
    }
    
    ?>
    </div>
    
</body>
</html>
