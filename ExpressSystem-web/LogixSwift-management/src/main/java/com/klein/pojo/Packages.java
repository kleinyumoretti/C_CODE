package com.klein.pojo;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@NoArgsConstructor
@AllArgsConstructor
public class Packages {

    private String origin; // 对应 origin_station
    private String destination; // 对应 destination_station
    private String current; // 对应 current_station
    private Integer id; // 对应 package_id

}
