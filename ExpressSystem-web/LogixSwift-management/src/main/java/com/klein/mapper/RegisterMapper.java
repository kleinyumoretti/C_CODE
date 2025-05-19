package com.klein.mapper;

import com.klein.pojo.User;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Select;

@Mapper
public interface RegisterMapper {
    @Select("select username ,password from user where username=#{username} and password=#{password}")
    User findByUsername(User user);
}
