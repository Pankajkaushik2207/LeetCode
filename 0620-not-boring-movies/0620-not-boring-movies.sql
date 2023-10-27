# Write your MySQL query statement below
# SELECT C.id, C.movie, C.description, C.rating
# FROM Cinema C
# ORDER BY C.rating DESC

# UNION
# SELECT NULL, NULL, NULL, NULL
# FROM Cinema
# LIMIT 2

# SELECT C.id, C.movie, C.description, C.rating
# FROM (
#     SELECT id, movie, description, rating
#     FROM Cinema
#     ORDER BY rating DESC
#     LIMIT 2
# ) AS C
# LEFT JOIN Cinema ON C.id IS NOT NULL;


# SELECT id, movie, description, rating
# FROM Cinema
# WHERE rating IS NOT NULL
# UNION
# SELECT NULL, NULL, NULL, NULL
# LIMIT 2;

# SELECT C.id, C.movie, C.description, C.rating
# FROM Cinema C
# LEFT JOIN (
#   SELECT id
#   FROM Cinema
#   WHERE rating IS NOT NULL
#   LIMIT 2
# ) AS Subquery
# ON C.id = Subquery.id
# WHERE Subquery.id IS NOT NULL;

# SELECT C.id, C.movie, C.description, C.rating
# FROM Cinema C
# WHERE C.id NOT IN (
#   SELECT id
#   FROM Cinema
#   WHERE rating IS NOT NULL
#   LIMIT 2
# );

SELECT id, movie, description, rating
FROM Cinema
WHERE id % 2 = 1
AND description != 'boring'
ORDER BY rating DESC;

