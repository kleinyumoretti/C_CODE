package com.klein.service.Impl;

import com.klein.mapper.PackagesMapper;
import com.klein.pojo.Packages;
import com.klein.service.PackagesService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class PackageServiceImpl implements PackagesService {
    @Autowired
    private PackagesMapper packagesMapper;
    @Override
    public List<Packages> findAll() {
        //System.out.println(packagesMapper.findAll());
        return packagesMapper.findAll();
    }

    @Override
    public void deleteById(Integer id) {
        packagesMapper.deleteById(id);
    }

    @Override
    public void add(Packages packages) {
        packagesMapper.add(packages);
    }
}
