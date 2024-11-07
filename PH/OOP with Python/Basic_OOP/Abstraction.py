from abc import ABC, abstractmethod


class Parent(ABC):
    @abstractmethod
    def show(self):
        print("parent")


class Child(Parent):
    def display(self):
        print("child")

    def show(self):
        return super().show()


myObject = Child()

myObject.display()
myObject.show()