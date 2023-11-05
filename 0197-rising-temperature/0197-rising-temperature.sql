# Write your MySQL query statement below

select w.id
from weather  w , weather  p 
where w.temperature>p.temperature  and DateDiff (w.recordDate,p.recordDate)=1 

