select i.REST_ID, i.REST_NAME, i.FOOD_TYPE, i.FAVORITES, i.ADDRESS, round(avg(r.review_score), 2) as SCORE
from rest_info as i
join rest_review as r on i.rest_id = r.rest_id
where i.address like '서울%'
group by r.rest_id
order by score desc, i.favorites desc;