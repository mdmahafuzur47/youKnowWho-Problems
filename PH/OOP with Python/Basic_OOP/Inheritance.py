# base class / parent class / common attributes + functionality class

class Gadget: 
    def __init__(self,brand,price,origin) -> None:
        self.brand = brand
        self.price = price
        self.origin = origin
    
    def run(self):
        return f"Running Device {self.brand}"
    
    def __repr__(self) -> str:
        return f"{self.brand} {self.price}"
         

# Derived class / child class / uncommon attributes + functionality class

class Laptop(Gadget):
    def __init__(self,brand,price,origin, memory_type) -> None:
        self.memory_type = memory_type
        super().__init__(brand,price,origin)
    
    def coding(self): 
        pass

    def __repr__(self) -> str:
        print(self.memory_type)
        return super().__repr__()
    

# multi-level inheritance 
class GamingLaptop(Laptop):
    def __init__(self, brand, price, origin, memory_type,graphic_card) -> None:
        self.graphic_card = graphic_card
        super().__init__(brand, price, origin, memory_type)

    def __repr__(self) -> str:
        print(self.graphic_card)
        return super().__repr__()

class Phone(Gadget):
    def __init__(self,brand,price,origin, sim_slot) -> None:
        self.sim_slot = sim_slot
        super().__init__(brand,price,origin)
    
    def calling(self,number,text):
        return f"Your SMS Number: {self.number}.Message: {self.text}"

myLaptop = Laptop("hp",360000,"dubai","ssd");

gamingLaptop = GamingLaptop("asus",4000000,'china','ssd',True);

print(gamingLaptop)

print(myLaptop);