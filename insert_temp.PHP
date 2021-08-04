<?php

if(isset($_GET["P1"])) {
   $val = $_GET["P1"]; // get sensor value from HTTP GET

   $servername = "localhost";
   $username = "Arduino";
   $password = "ArduinoGetStarted.com";
   $dbname = "db_arduino";

   // Create connection
   $conn = new mysqli($servername, $username, $password, $dbname);
   // Check connection
   if ($conn->connect_error) {
      die("Connection failed: " . $conn->connect_error);
   }

   $sql = "UPDATE pong_game_data SET P1 = $val WHERE temp_id=1;";

   if ($conn->query($sql) === TRUE) {
      echo "New record created successfully";
   } else {
      echo "Error: " . $sql . " => " . $conn->error;
   }

   $conn->close();

} elseif(isset($_GET["P2"])) {
   $val = $_GET["P2"]; // get temperature value from HTTP GET

   $servername = "localhost";
   $username = "Arduino";
   $password = "ArduinoGetStarted.com";
   $dbname = "db_arduino";

   // Create connection
   $conn = new mysqli($servername, $username, $password, $dbname);
   // Check connection
   if ($conn->connect_error) {
      die("Connection failed: " . $conn->connect_error);
   }

   $sql = "UPDATE pong_game_data SET P2 = $val WHERE temp_id=1;";

   if ($conn->query($sql) === TRUE) {
      echo "New record created successfully";
   } else {
      echo "Error: " . $sql . " => " . $conn->error;
   }

   $conn->close();

} elseif(isset($_GET["STARTED1"])) {
   $val = $_GET["STARTED1"]; // get temperature value from HTTP GET

   $servername = "localhost";
   $username = "Arduino";
   $password = "ArduinoGetStarted.com";
   $dbname = "db_arduino";

   // Create connection
   $conn = new mysqli($servername, $username, $password, $dbname);
   // Check connection
   if ($conn->connect_error) {
      die("Connection failed: " . $conn->connect_error);
   }

   $sql = "UPDATE pong_game_data SET STARTED1 = $val WHERE temp_id=1;";

   if ($conn->query($sql) === TRUE) {
      echo "New record created successfully";
   } else {
      echo "Error: " . $sql . " => " . $conn->error;
   }

   $conn->close();
} elseif(isset($_GET["STARTED2"])) {
   $val = $_GET["STARTED2"]; // get temperature value from HTTP GET

   $servername = "localhost";
   $username = "Arduino";
   $password = "ArduinoGetStarted.com";
   $dbname = "db_arduino";

   // Create connection
   $conn = new mysqli($servername, $username, $password, $dbname);
   // Check connection
   if ($conn->connect_error) {
      die("Connection failed: " . $conn->connect_error);
   }

   $sql = "UPDATE pong_game_data SET STARTED2 = $val WHERE temp_id=1;";

   if ($conn->query($sql) === TRUE) {
      echo "New record created successfully";
   } else {
      echo "Error: " . $sql . " => " . $conn->error;
   }

   $conn->close();
} else {
   echo "no new value is not set";
}
?>

