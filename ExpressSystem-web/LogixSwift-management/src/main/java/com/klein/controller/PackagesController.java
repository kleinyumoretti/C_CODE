package com.klein.controller;

import com.klein.pojo.Packages;
import com.klein.pojo.Result;
import com.klein.service.PackagesService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
public class PackagesController {
    @Autowired
    private PackagesService packagesService;

    //@RequestMapping(value = "/packages",method = RequestMethod.GET)
    @GetMapping ("/packages")
    public Result packages()
    {
        List<Packages> list=packagesService.findAll();
        return  Result.success(list);
    }

    @DeleteMapping("/packages")
    public Result delete(Integer id)
    {
        packagesService.deleteById(id);
        return Result.success();

    }

    @PostMapping("/packages")
    public Result add(@RequestBody Packages packages)
    {
        System.out.println(packages);
        packagesService.add(packages);
        return Result.success();
    }
}
