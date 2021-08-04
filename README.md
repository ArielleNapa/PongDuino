# PongDuino
Pong is an ancient game released in 1972 by the famous video game manufacturer Atari. The designer is Alan Alcorn, who created the initial version as the training exercise assigned by the co-founder of Atari, Nolan Bushnell. The first Pong game was carried in Magnavox Odyssey and has been updated to multi different versions. The integral game system, which was put inside a wooden box, was popular in the pubs and spread widely and quickly. The Pong game of Atari brought huge commercial benefits to the company and broadened the video game market.
The Pong game is a two-dimensional Ping pong simulating game. The players move the vertical paddles up located in the left or right screen by rotating the rotary knobs. The ball will be rebounded after touching the paddles. If the paddle does not catch the ball, the other player can score one point. 
Using electronic components, our project aims to create a fun familiar game experience. Our team decided to go with this idea, given our mutual interest in networks & gaming.
How it works:
Playable by 2 players with wireless controllers(2 Arduino kit). You must score 10 "goals" to win, and the game ends when one of the players reaches this goal.
The game will start after each player has connected to the server and we run the Python program.  When playing, the player can see his position in relation to the ball (i.e., any movement of the player impacts the movement of the player's board). 
The corresponding objectives include:

•	 Using two 3D accelerometers, transfer the motions of the hand to the paddle on the computer screen.
•	Use Wi-Fi shield to display game scores and results on the computer screen.
•	Design another operating method with the push buttons to control the starting of the game.
•	Web Editor - Sends "GET HTTP" requests that contain relevant accelerometer information repeatedly to the local server. 
•	PHP code - Responds to "GET http" requests and updates the MySQL database containing players' positions based on accelerometer data.
•	An application called XAMPP - Stands for cross-platform, MySQL, PHP - is downloaded and installed on the computer. It allows us to create a web server locally.
•	SQL - We created a MySQL table that was monitored using XAMPP. By using the command prompt and running "SELECT * FROM pong_data;" we can see how each board reacts to the sensor.
•	Python - (main.py) The program that runs the game. Monitoring after each sensor reaction and moving the players within the game.

