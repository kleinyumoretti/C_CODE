package com.klein.service.Impl;

import com.klein.mapper.RegisterMapper;
import com.klein.pojo.User;
import com.klein.service.RegisterService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class RegisterServiceImpl implements RegisterService {
    @Autowired
    private RegisterMapper registerMapper;
    @Override
    public boolean register(User user) {
        User existingUser = registerMapper.findByUsername(user);
        if(existingUser == null) {
            registerMapper.register(user);
            return false;
        }else{
            return false;
        }
    }
}
