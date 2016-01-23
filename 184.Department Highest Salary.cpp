# Write your MySQL query statement below
select c.Name,b.Name,b.Salary 

from (
      select MAX(d.Salary) Salary, d.DepartmentId   //临时表内有含有每个部门内工资最高的人
      from Employee d, Department f
      where d.DepartmentId=f.Id                //对两个表进行连接
      group by d.DepartmentId                  //对Employee的Department进行分组
      ) a,    Employee b, Department c         //由Employee与Department组成新的临时表a,
      
where a.Salary=b.Salary                        
      and b.DepartmentId=c.Id 
      and b.DepartmentId=a.DepartmentId;      