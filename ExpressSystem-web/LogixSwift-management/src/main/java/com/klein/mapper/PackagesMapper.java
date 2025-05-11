package com.klein.mapper;

import com.klein.pojo.Packages;
import org.apache.ibatis.annotations.Delete;
import org.apache.ibatis.annotations.Insert;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Select;

import java.util.List;

@Mapper
public interface PackagesMapper {
    @Select("select origin, destination, current,id from packages;")
    List<Packages> findAll();

    @Delete("delete from packages where id=#{id};")
    void deleteById(Integer id);

    @Insert("insert into packages(origin,destination,current) values (#{origin},#{destination},#{current});")
    void add(Packages packages);
}
