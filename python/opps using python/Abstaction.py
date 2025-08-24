#Abstraction
#reduce complexity by hiding unneccessary details.

class Emailservices:
    def _connect(self):
        print("connecting to email server")

    def _authenticate(self):
        print("authenticating...")

    def send_Email(self):
        self._connect()
        self._authenticate()
        print("sending email to the server...")
        self._disconnect()

    def _disconnect(self):
        print("Disconnected...")

email=Emailservices()
email.send_Email()  #public method