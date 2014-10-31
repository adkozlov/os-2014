#pragma once

#include <string>
#include <sstream>

class file_t {
public:

    file_t(const std::string& name, size_t size, uint32_t start);

    std::string name() const;
    void set_name(const std::string& name);

    size_t size() const;
    uint32_t start() const;

    friend std::istream& operator>>(std::istream& in, file_t& file);
    friend std::ostream& operator<<(std::ostream& out, const file_t& file);
private:
    std::string name_;
    size_t size_;
    uint32_t start_;
};