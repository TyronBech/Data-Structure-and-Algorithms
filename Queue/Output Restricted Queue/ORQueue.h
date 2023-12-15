#ifndef OUTPUT_RESTRICTED_QUEUE_H_
#define OUTPUT_RESTRICTED_QUEUE_H_
#include<iostream>
#include<vector>

/// @brief Template class OR_Queue implementation
/// @tparam T will be the data type of the object Queue
template<class T>
class OR_Queue{
private:
    // Private vector data, it will be the container for the Queue
    std::vector<T> data;
public:
    // Default constructor
    OR_Queue() = default;
    /// @brief enqueue_front method to push element on the front of the queue
    /// @param data is the element to be stored in the queue
    void enqueue_front(const T& data){
        this->data.insert(this->data.begin(), data);
    }
    /// @brief enqueue_back method to push element on the back of the queue
    /// @param data is the element to be stored in the queue
    void enqueue_back(const T& data){
        this->data.push_back(data);
    }
    /// @brief dequeue method to remove the last element in the Queue
    /// @return it will return the last element in the Queue
    T dequeue(){
        if(!this->empty()){
            T retrieved_data = this->data.back();
            this->data.pop_back();
            return retrieved_data;
        } else {
            throw std::runtime_error("The Queue is empty");
        }
    }
    /// @brief front method to check the element in the front of the Queue
    /// @return it returns the data at the front
    T front(){
        if(!this->empty()){
            T retrieved_data = this->data.front();
            return retrieved_data;
        } else {
            throw std::runtime_error("The Queue is empty");
        }
    }
    /// @brief back method to check the element in the back of the Queue
    /// @return it returns the data at the back
    T back(){
        if(!this->empty()){
            T retrieved_data = this->data.back();
            return retrieved_data;
        } else {
            throw std::runtime_error("The Queue is empty");
        }
    }
    /// @brief print method to print all the existing elements in the Queue
    void print(){
        if(!this->empty()){
            for(size_t i = 0; i < this->data.size(); i++){
                std::cout << this->data[i];
                if(i == this->data.size() - 1){
                    std::cout << ' ';
                } else {
                    std::cout << ", ";
                }
            }
            std::cout << std::endl;
        }
    }
    /// @brief size method to retrieved the current size of the Queue
    /// @return it returns the current size of the Queue
    size_t size() const {
        return this->data.size();
    }
    /// @brief empty method to check if the Queue is empty or not
    /// @return it returns a boolean value
    bool empty() const {
        return this->data.empty();
    }
};

#endif