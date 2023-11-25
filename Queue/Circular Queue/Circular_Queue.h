#ifndef CIRCULAR_QUEUE_H_
#define CIRCULAR_QUEUE_H_
#include<iostream>
#include<vector>

/// @brief Template class Circular Queue
/// @tparam T is going to be the data type of the Queue instance
template<class T>
class Circular_Queue{
private:
    // Private vector to store all the data in the queue, alongside with index variables
    std::vector<T> data;
    int front;
    int rear;
public:
    // Constructor of the class
    // It resizes the vector based in the given argument and set indexes to -1
    Circular_Queue(const size_t& size) : front(-1), rear(-1){
        this->data.resize(size);
    }
    /// @brief Enqueue method to add data to the Queue
    /// @param value is going to be inserted to the vector Queue
    void enqueue(const T& value){
        if(this->empty()){
            this->front = this->rear = 0;
        } else if(this->isFull()){
            throw "Error: Queue is full";
        } else {
            this->rear = (this->rear + 1) % this->data.capacity();
        }
        this->data[this->rear] = value;
    }
    /// @brief Dequeue method to remove the front element in the Queue
    /// @return It returns the dequeued element
    T dequeue(){
        if(!this->empty()){
            T retrieved_data = this->data.at(this->front);
            if(this->front == this->rear){
                this->front = this->rear = -1;
            } else {
                this->front = (this->front + 1) % this->data.capacity();
            }
            return retrieved_data;
        }
        return T();
    }
    /// @brief Print method to print all the existing data in the Queue
    void print(){
        if(!this->empty()){
            for(int i = this->front; i != this->rear && i != -1; i = (i+1) % this->data.capacity()){
                std::cout << this->data.at(i) << ", ";
            }
            std::cout << this->data.at(this->rear);
            std::cout << std::endl;
        }
    }
    /// @brief isFull method to check if the Queue is full
    /// @return it returns a boolean value
    bool isFull() const {
        return ((this->front == 0 && this->rear == this->data.capacity() - 1) || (this->front == this->rear + 1));
    }
    /// @brief Empty method to check if the Queue is empty
    /// @return It returns a boolean value
    bool empty() const {
        return (front == -1 && rear == -1);
    }
};
#endif