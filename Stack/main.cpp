#include "Stack.h"

int main(){
    Stack<std::string> names;
    std::string data;
    unsigned choice;
    while(true){
        std::system("cls");
        std::cout << "Stack Data Structure" << std::endl;
        std::cout << "1. Push" << std::endl;
        std::cout << "2. Pop" << std::endl;
        std::cout << "3. Peek" << std::endl;
        std::cout << "4. Empty" << std::endl;
        std::cout << "5. Print" << std::endl;
        std::cout << "6. Size" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch(choice){
            case 1:
                std::cout << "Enter the data: ";
                std::getline(std::cin >> std::ws, data);
                names.push(data);
                break;
            case 2:
                data = names.pop();
                if(data.empty()){
                    std::cout << "The Stack is empty" << std::endl;
                } else {
                    std::cout << "The data: " << data << " has been popped" << std::endl;
                }
                break;
            case 3:
                data = names.peek();
                if(data.empty()){
                    std::cout << "The Stack is empty" << std::endl;
                } else {
                    std::cout << "Peek data: " << data << std::endl;
                }
                break;
            case 4:
                if(names.empty()){
                    std::cout << "The Stack is empty" << std::endl;
                } else {
                    std::cout << "The Stack is not empty" << std::endl;
                }
                break;
            case 5:
                names.print();
                break;
            case 6:
                std::cout << "Current size: " << names.size() << std::endl;
                break;
            case 7: exit(0);
            default:
                std::cout << "That is a invalid choice" << std::endl;
        }
        std::system("pause");
    }
    return 0;
}