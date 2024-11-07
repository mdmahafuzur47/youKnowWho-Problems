class Student:
    def __init__(self,name,age,id) -> None:
        self.name = name # public
        self._age = age # protected
        self.__id = id # private

    def __repr__(self) -> str:
        return f"{self.name} {self.age} {self.id}"
    def showId(self):
        print(f"{self.__id}");

mafuz = Student("mafuz",23,28)

# print(mafuz.__id); # protected can not be accessed by outside in the code
mafuz.showId()