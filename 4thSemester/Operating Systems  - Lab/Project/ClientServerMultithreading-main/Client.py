# Import socket module
import socket


def Main():
    # local host IP '127.0.0.1'
    host = '127.0.0.1'

    # Define the port on which you want to connect
    port = 12345

    # message you send to server
    while True:
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        # connect to server on local computer
        s.connect((host, port))

        message = input("Enter your message: ")
        # message sent to server
        s.send(message.encode('ascii'))

        # message received from server
        data = s.recv(1024)

        # print the received message
        # here it would be a reverse of sent message
        print('Received from the server: ', str(data.decode('ascii')))
        s.close()
        # ask the client whether he wants to continue
        ans = input('\nDo you want to continue?\nPress enter for continue or write DISCONNECT for end:')
        if ans == 'y' or 'Y':
            continue
        if message or ans == 'DISCONNECT' or 'N' or 'n':
            break
    # close the connection
    s.close()


if __name__ == '__main__':
    Main()
