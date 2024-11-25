SELECT st.student_id , st.student_name, su.subject_name, COUNT(e.student_id) AS 'attended_exams'
FROM Students st
CROSS JOIN Subjects su
LEFT JOIN Examinations e
    ON e.student_id = st.student_id
    AND e.subject_name = su.subject_name
GROUP BY st.student_id, st.student_name, su.subject_name
ORDER BY st.student_id, st.student_name, su.subject_name