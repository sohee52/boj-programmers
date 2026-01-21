select i.item_id, i.item_name, i.rarity
from item_info i
where i.item_id not in (
    select case when parent_item_id is null then -1
                else parent_item_id
            end as pid
    from item_tree
)
order by i.item_id desc;
