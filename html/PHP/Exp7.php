<!DOCTYPE html>
<html lang="en">
<head>
    <title>output</title>
</head>
<body>
    <center>
        <h1>Result</h1>
        <?php
        // user and password
        $data = array(
            // user => password
            "akshay" => "akshay",
            "akarsh" => "akarsh",
            "arya" => "arya"
        );
        $user = $_POST['username'];
        $pass = $_POST['password'];
        if($pass == $data[$user]){
            echo "<h2>Login Succesful....</h2>";
            echo "<h1>Welcome $user</h1>";
        }
        else{
            echo "<h2>Login Failed....</h2>";
            echo "<h1>You Imposter $user</h1>";
        }
        ?>
    </center>
</body>
</html>
