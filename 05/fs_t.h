#pragma once

#include <string>
#include <stdexcept>

class fs_t {
public:
    class fs_error : public std::runtime_error {
    public:
        explicit fs_error(const std::string& message);
    };

public:
    fs_t(const std::string& path, bool pass = false);

    void init();
    void format();
    void import_(const std::string& src, const std::string& dst);
    void export_(const std::string &src, const std::string &dst);
    std::string ls(const std::string &path);
    void copy(const std::string& src, const std::string& dst);
    void move(const std::string& src, const std::string& dst);
    void rm(const std::string& path);
    void mkdir(const std::string& path);
};