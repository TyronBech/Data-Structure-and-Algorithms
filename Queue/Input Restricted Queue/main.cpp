#include "IQueue.h"

// main function
int main(){
    // Sample implementation of input restricted queue
    IQueue<std::string> names;
    // variable to store user input
    unsigned choice;
    // variable to store I/O data for the queue
    std::string data;
    // While loop that continues until user exits
    while(true){
        // Main menu of the program
        std::system("cls");
        std::cout << "Input Restricted Queue" << std::endl;
        std::cout << "1. Enqueue" << std::endl;
        std::cout << "2. Dequeue front" << std::endl;
        std::cout << "3. Dequeue back" << std::endl;
        std::cout << "4. Front" << std::endl;
        std::cout << "5. Back" << std::endl;
        std::cout << "6. Print" << std::endl;
        std::cout << "7. Size" << std::endl;
        std::cout << "8. Empty" << std::endl;
        std::cout << "9. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        // Switch case to check user choice
        switch(choice){
            case 1: // Enqueue case
                std::cout << "Enter the data: ";
                std::getline(std::cin >> std::ws, data);
                names.enqueue(data);
                break;
            case 2: // Dequeue front case
                if(!names.empty()){
                    data = names.dequeue_front();
                    std::cout << "Dequeued data: " << data << std::endl;
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 3: // Dequeue back case
                if(!names.empty()){
                    data = names.dequeue_back();
                    std::cout << "Dequeued data: " << data << std::endl;
                } else {
                    std::cout << "The Queue is empty" << std::endl;
                }
                break;
            case 4: // Front case
                if(!names.empty()){
                    data = names.front();
                    std::cout << "Data at front: " << data << std::endl;
                } else {
                    std::cout << "The Queue uis empty" << std::endl;
                }
                break;
            case 5: // Back case
                if(!names.empty()){
                    data = names.back();
                    std::cout << "Data at back: " << data << std::endl;
                } else {
                    std::cout << "The Queue uis empty" << std::endl;
                }
                break;
            case 6: // Print case
                if(!names.empty()) names.print();
                else std::cout << "The Queue is empty" << std::endl;
                break;
            case 7: // Size case
                std::cout << "Size: " << names.size() << std::endl;
                break;
            case 8: // Empty case
                if(names.empty()){
                    std::cout << "The Queue is empty" << std::endl;
                } else {
                    std::cout << "The Queue is not empty" << std::endl;
                }
                break;
            case 9: // Exit case
                exit(0);
            default: // Default case for invalid input
                std::cout << "That is a invalid choice" << std::endl;
        }
        std::system("pause");
    }
    return 0;
}