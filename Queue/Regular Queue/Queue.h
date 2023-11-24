#ifndef QUEUE_H_
#define QUEUE_H_
#include<iostream>
#include<vector>

/// @brief Template class Queue
/// @tparam T parameter to work with various data types
template<class T>
class Queue{
private:
    // Private vector data to store all the elements to be enqueued in the Stack
    std::vector<T> data;
public:
    // Default constructor
    Queue() = default;
    /// @brief Enqueue method to push element in the queue
    /// @param data is the element to be pushed/enqueued in the Queue
    void enqueue(const T& data){
        this->data.push_back(data);
    }
    /// @brief Dequeue method to remove the front element in the Queue
    /// @return it returns the dequeued element
    T dequeue(){
        if(!this->empty()){
            T d_data = this->data.front();
            this->data.erase(this->data.begin());
            return d_data;
        }
        return T();
    }
    /// @brief Print method to print all the existing data in the Queue
    void print(){
        if(!this->empty()){
            for(size_t i = 0; i < this->size(); ++i){
                std::cout << this->data.at(i);
                if(i == this->size() - 1){
                    std::cout << ' ';
                } else {
                    std::cout << ", ";
                }
            }
            std::cout << std::endl;
        }
    }
    /// @brief Peek method to retrieve the front element in the Queue
    /// @return it returns the front element in the Queue
    T peek(){
        if(!this->empty()){
            return this->data.front();
        }
        return T();
    }
    /// @brief Size method to retrieve the current size of the Queue
    /// @return It returns the current size of the Queue
    size_t size() const {
        return this->data.size();
    }
    /// @brief Empty method to check if the Queue is empty or not
    /// @return It returns a boolean value
    bool empty() const {
        return this->data.empty();
    }
};
#endif