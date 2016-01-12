delete a 
from Person a inner join Person b 
on (a.Id > b.Id and a.Email = b.Email)