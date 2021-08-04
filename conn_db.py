import pymysql
def get_cords_from_db():
   #database connection
   connection = pymysql.connect(host="localhost", user="root", passwd="your-root-password", database="db_arduino")
   cursor = connection.cursor()

   # queries for retrievint all rows
   retrive = "Select * from pong_game_data;"

   #executing the quires
   cursor.execute(retrive)
   rows = cursor.fetchall()
   for row in rows:
      players = row
   player1 = players[1]
   player2 = players[2]
   start1 = players[3]
   start2 = players[4]

   #commiting the connection then closing it.
   connection.commit()
   connection.close()

   return [player1,player2,start1,start2]

def reset_db():
   # database connection
   connection = pymysql.connect(host="localhost", user="root", passwd="your-root-password", database="db_arduino")
   cursor = connection.cursor()

   # queries for retrievint all rows
   retrive = "UPDATE pong_game_data SET STARTED1=0, STARTED2=0 WHERE temp_id=1;"

   # executing the quires
   cursor.execute(retrive)

   # commiting the connection then closing it.
   connection.commit()
   connection.close()
