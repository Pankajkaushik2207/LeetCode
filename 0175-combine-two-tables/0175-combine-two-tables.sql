
# Select * 
# from Person P
# left join Address a On p.personId =a.personId;
Select p.firstname, p.lastname,a.city,a.state from Person as p left outer join Address as a ON p.personId = a.personId;

# SELECT p.firstName, p.lastName, a.city, a.state
# FROM Person p
# LEFT JOIN Address a ON p.personId = a.personId;
