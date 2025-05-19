package com.klein.controller;

import com.klein.pojo.Result;
import com.klein.pojo.User;
import com.klein.service.RegisterService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class RegisterController {
    @Autowired
    private RegisterService registerService;
    @PostMapping("/register")
    public Result register(@RequestBody User user) {
        if(registerService.register(user)) {
            return Result.success();
        }
        else{
            return Result.error("注册失败");
        }
    }
}
