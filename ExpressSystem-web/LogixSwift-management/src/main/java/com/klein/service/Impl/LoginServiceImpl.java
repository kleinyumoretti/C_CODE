package com.klein.service.Impl;

import com.klein.mapper.LoginMapper;
import com.klein.pojo.User;
import com.klein.service.LoginService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class LoginServiceImpl implements LoginService {
    @Autowired
    private LoginMapper loginMapper;
    @Override
    public List<User> findByUsername(User user) {
        List<User> users= loginMapper.findByUsername(user);
        return users;
    }
}
