package com.klein.mapper;

import com.klein.pojo.User;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Select;

import java.util.List;

@Mapper
public interface LoginMapper {

    @Select("select username,password from user where username=#{username} and password =#{password};")
    List<User> findByUsername(User user);


}
