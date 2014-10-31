#include "fs_t.h"

fs_t::fs_error::fs_error(const std::string& message)
    : std::runtime_error(message) {
}

fs_t::fs_t(const std::string& path, bool pass) {

}

void fs_t::init() {

}

void fs_t::format() {

}

void fs_t::import_(const std::string& src, const std::string& dst) {

}

void fs_t::export_(const std::string &src, const std::string &dst) {

}

std::string fs_t::ls(const std::string &path) {
    return "";
}

void fs_t::copy(const std::string& src, const std::string& dst) {

}

void fs_t::move(const std::string& src, const std::string& dst) {

}

void fs_t::rm(const std::string& path) {

}

void fs_t::mkdir(const std::string& path) {

}
