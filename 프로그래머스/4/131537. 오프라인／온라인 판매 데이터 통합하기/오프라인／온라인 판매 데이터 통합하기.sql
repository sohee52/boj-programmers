select date_format(sales_date, "%Y-%m-%d") as SALES_DATE, PRODUCT_ID, USER_ID, SALES_AMOUNT
from online_sale
where date_format(sales_date, "%Y-%m") = "2022-03"
union all
select date_format(sales_date, "%Y-%m-%d") as SALES_DATE, PRODUCT_ID, NULL, SALES_AMOUNT
from offline_sale
where date_format(sales_date, "%Y-%m") = "2022-03"
order by sales_date, product_id, user_id;