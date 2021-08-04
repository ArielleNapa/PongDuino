This activity will teach you how to make a wireless Pong game using two OPLA IoT Kits. We will build a server on our PC, connect the kits to this server, and monitor the accelerometers on each kit. You will write a Python program to display the game board on the PC screen. Additionally, you will create a SQL table that will be used to send information about the motion of each kit to your Python code, which will use it to move the player paddles.
Learning Objectives:
1.	Learn how to connect 2 devices to the web editor.
2.	Learn how to build and work with local server (be familiar with XAMPP).
3.	Learn how to use the board wirelessly.
4.	Read data points and use them inside a computer.
5.	Learning how to use accelerometers sensor.
Gradually building the project/game:
Before starting with programming and after connecting the 2 board to the computer, make sure they are properly connected to the Arduino IDE.
Step 1: Web Editor
We will start by making a new sketch for each board and giving them the names “send_http_P1” and “send_http_P2” (P1 for player 1, and P2 for player 2). We do this to keep sending "GET HTTP" requests with relevant accelerometer data to the local server. 
Copy the code from files "send_http_P1" and "send_http_P2" to the sketches.

Step 2: Writing the PHP code
This code responds to "GET http" requests and updates the MySQL database containing players' positions based on accelerometer data.
Copy the code from file "conn_db".

Step 3: Creating the server
Download XAMPP, you can find here link to download the application to your computer- https://www.apachefriends.org/download.html
XAMPP is an easy to install app for cross-platform, MySQL, PHP - is downloaded and installed on the computer. It allows us to create a web server locally.
XAMPP gives you an IP address which you can later use for your needs.
This IP address should be saved and placed where we instruct you to.

Step 4: Creating the SQL table
Create a MySQL table that will monitored using XAMPP. By using the command prompt and running "SELECT * FROM pong_data;" we can see how each board reacts to the sensor.
To create your SQL table, copy and run in the command line the lines from the file "sql_table_commands" (will work only after you installed XAMPP).

Step 5: Programing the game itself
PyCharm is recommended for writing the code, if you haven't installed it before, following the link- https://www.jetbrains.com/pycharm/download/#section=windows
Make sure you installed Python on your computer, otherwise you can install now using the following link- https://www.python.org/downloads/
Once you have both on your computer, open PyCharm and create a new project and name it "main".
Copy the codes from the files with the end ".py"

This project will consist of C++, PHP, SQL, Python code:
•	 C++ – Maintaining connection from the motion sensor to the server while sending data.
•	PHP - Receives “GET http” requests and updates the MySQL database containing current players positions corresponding to the accelerometer information.
•	SQL - monitored using XAMPP. By using the command prompt and running "SELECT * FROM pong_data;" we can see how each board reacts to the sensor.
•	Python – Everything game logic & appearance related (the App).

