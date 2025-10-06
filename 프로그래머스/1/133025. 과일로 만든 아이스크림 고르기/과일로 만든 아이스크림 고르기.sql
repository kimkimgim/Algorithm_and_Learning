-- 코드를 입력하세요
SELECT fh.FLAVOR

FROM FIRST_HALF AS fh
INNER JOIN ICECREAM_INFO ii ON fh.FLAVOR = ii.FLAVOR -- 교집합(INNER JOIN 테이벌 별칭 ON 일치칼럼)

WHERE fh.TOTAL_ORDER >= 3000 AND ii.INGREDIENT_TYPE = 'fruit_based' -- 총 주문량 >= 3000 && 주 성분이 과일인 아이스크림의 맛
ORDER BY fh.TOTAL_ORDER DESC; -- 총 주문량이 큰 순서대로 


