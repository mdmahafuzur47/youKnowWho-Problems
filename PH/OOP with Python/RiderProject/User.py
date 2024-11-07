from abc import ABC, abstractmethod
from datetime import datetime

class User(ABC):
    def __init__(self,name,email,nid) -> None:
        self.name = name
        self.email = email
        #Todo: set user id dynamically
        self.__id = 0
        self.__nid = nid
        self.wallet = 0

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError
    

class Rider(User): 
    def __init__(self, name, email, nid) -> None:
        self.current_ride = None
        self.wallet = 0
        super().__init__(name, email, nid)

    def display_profile(self):
        print(f"Fider: with name: {self.name} and email: {self.email}")

    def load_cash(self,amount):
        if amount > 0:
            self.wallet += amount

    def request_ride(self,location,destination):
        if not self.current_ride:
            # TODO: set ride property
            # TODO: set current ride via ride match
            ride_request = None
            self.current_ride = None


class Driver(User):
    def __init__(self, name, email, nid,current_location) -> None:
        super().__init__(name, email, nid)
        self.current_location = current_location

    def display_profile(self):
        print(f"Driver: with name: {self.name} and email: {self.email}")

    def accept_ride(self,ride):
        ride.set_driver(self)



class Ride:
    def __init__(self,start_location, end_location) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = None
        self.start_time = None
        self.end_time = None
        self.estimated_fare = None

    def set_driver(self,driver):
        self.driver = driver

    def start_ride(self):
        self.start_time = datetime.now()

    def end_ride(self,rider, amount):
        self.end_time = datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare
        
