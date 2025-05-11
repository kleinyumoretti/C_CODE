package com.klein.service;

import com.klein.pojo.Packages;

import java.util.List;

public interface PackagesService {
    List<Packages> findAll();

    void deleteById(Integer id);

    void add(Packages packages);
}
