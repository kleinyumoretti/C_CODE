package com.klein.service;

import com.klein.pojo.User;

import java.util.List;

public interface LoginService {
    List<User> findByUsername(User user);
}
