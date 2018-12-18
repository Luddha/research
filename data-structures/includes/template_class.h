#pragma once

template <typename Object>
class MemoryCell {
    public:
        explicit MemoryCell( const Object & initialValue = Object{ }) : storedValue{ initialValue } { } //
        const Object & read() const {return storedValue; }                                              // look up syntax 
        void write (const Object & x) { storedValue = x;}                                               //
    private:
        Object storedValue;
};

