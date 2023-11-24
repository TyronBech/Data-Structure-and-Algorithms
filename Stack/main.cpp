#include "Stack.h"

// main function
int main(){
    // Declaration of Stach using string as its data type
    Stack<std::string> names;
    std::string data;
    unsigned choice;
    // While loop to continue the program until user exits
    while(true){
        std::system("cls");
        // Menu choices
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
        // Switch case to check user choice
        switch(choice){
            case 1: // Push case
                std::cout << "Enter the data: ";
                std::getline(std::cin >> std::ws, data);
                names.push(data);
                break;
            case 2: // Pop case
                if(!names.empty()){
                    std::cout << "Popped data: " << names.pop() << std::endl;
                } else {
                    std::cout << "The Stack is empty" << std::endl;
                }
                break;
            case 3: // Peek case
                if(!names.empty()){
                    std::cout << "Peek data: " << names.peek() << std::endl;
                } else {
                    std::cout << "The Stack is empty" << std::endl;
                }
                break;
            case 4: // Empty case
                if(!names.empty()){
                    std::cout << "The Stack is not empty" << std::endl;
                } else {
                    std::cout << "The Stack is empty" << std::endl;
                }
                break;
            case 5: // Print case
                if(!names.empty()){
                    names.print();
                } else {
                    std::cout << "The Stack is empty" << std::endl;
                }
                break;
            case 6: // Size case
                std::cout << "Current size: " << names.size() << std::endl;
                break;
            case 7: // Exit case
            exit(0);
            default:
                std::cout << "That is a invalid choice" << std::endl;
        }
        std::system("pause");
    }
    return 0;
}