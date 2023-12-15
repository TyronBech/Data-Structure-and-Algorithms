#include "ORQueue.h"
#include<string>

// main function
int main(){
    // Sample declaration of Queue
    OR_Queue<std::string> names;
    unsigned choice;
    std::string data;
    // While loop to loop the program until user exits
    while(true){
        std::system("cls");
        //main menu of the program
        std::cout << "Output Restricted Queue" << std::endl;
        std::cout << "1 - Enqueue Front" << std::endl;
        std::cout << "2 - Enqueue Back" << std::endl;
        std::cout << "3 - Dequeue" << std::endl;
        std::cout << "4 - Front" << std::endl;
        std::cout << "5 - Back" << std::endl;
        std::cout << "6 - Print" << std::endl;
        std::cout << "7 - Size" << std::endl;
        std::cout << "8 - Empty" << std::endl;
        std::cout << "9 - Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        // Switch to check the user choice
        switch(choice){
            case 1: // Enqueue front
                std::cout << "Enter the data: ";
                std::getline(std::cin >> std::ws, data);
                names.enqueue_front(data);
                break;
            case 2: // Enqueue back
                std::cout << "Enter the data: ";
                std::getline(std::cin >> std::ws, data);
                names.enqueue_back(data);
                break;
            case 3: // Dequeue
                if(!names.empty()){
                    data = names.dequeue();
                    std::cout << "Dequeued data: " << data << std::endl;
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 4: // Front
                if(!names.empty()){
                    data = names.front();
                    std::cout << "Front data: " << data << std::endl;
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 5: // Back
                if(!names.empty()){
                    data = names.back();
                    std::cout << "Back data: " << data << std::endl;
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 6: // Print
                if(!names.empty()){
                    names.print();
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 7: // Size
                std::cout << "Current size: " << names.size() << std::endl;
                break;
            case 8: // Empty
                if(!names.empty()){
                    std::cout << "The Queue is not empty" << std::endl;
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 9: // Exit
                exit(0);
                break;
            default: // dafault case if user input wrong choice
                std::cout << "That is a invalid choice" << std::endl;
        }
        std::system("pause");
    }
    return 0;
}