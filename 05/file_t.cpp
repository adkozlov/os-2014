#include "file_t.h"

file_t::file_t(const std::string& name, size_t size, uint32_t start) : name_(name), size_(size), start_(start) {}

std::string file_t::name() const {
    return name_;
}

void file_t::set_name(const std::string& name) {
    name_ = name;
}

size_t file_t::size() const {
    return size_;
}

uint32_t file_t::start() const {
    return start_;
}

std::istream& operator>>(std::istream& in, file_t& file) {
    in >> file.name_;
    in >> file.size_;
    in >> file.start_;

    return in;
}

std::ostream& operator<<(std::ostream& out, const file_t& file) {
    out << file.name_ << " ";
    out << file.size_ << " ";
    out << file.start_ << std::endl;

    return out;
}