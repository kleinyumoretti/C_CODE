package com.klein.controller;

import com.klein.pojo.Result;
import com.klein.pojo.User;
import com.klein.service.LoginService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import java.util.List;

@RestController
public class LoginController {
    @Autowired
    private LoginService loginservice;
    @PostMapping ("/login")
    public Result login(@RequestBody User user)
    {
        List<User> users=loginservice.findByUsername(user);
        System.out.println(user);
        if(users.size()==0)
        {
            return Result.error("用户名或密码错误");
        }
        else
        {
            return Result.success();
        }
    }
}
