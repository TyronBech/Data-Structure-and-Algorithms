#ifndef STACK_H_
#define STACK_H_
#include<iostream>
#include<vector>

template<class T>
class Stack{
private:
    std::vector<T> data;
public:
    Stack() = default;
    void push(const T& data){
        this->data.push_back(data);
    }
    T pop(){
        if(!this->data.empty()){
            T data = this->data.back();
            this->data.pop_back();
            return data;
        }
        return T();
    }
    T peek() const {
        if(!this->data.empty()){
            return this->data.back();
        }
        return T();
    }
    bool empty() const {
        return this->data.empty();
    }
    void print(){
        if(!this->data.empty()){
            for(size_t i = 0; i < this->data.size(); ++i){
                std::cout << this->data.at(i);
                if(i == this->data.size() - 1){
                    std::cout << ' ';
                } else {
                    std::cout << ", ";
                }
            }
        } else {
            std::cout << "The Stack is empty";
        }
        std::cout << std::endl;
    }
    size_t size() const {
        return this->data.size();
    }
};

#endif