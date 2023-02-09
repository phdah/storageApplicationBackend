CREATE DATABASE cpp_test_db;

CREATE TABLE table_name (
  id SERIAL PRIMARY KEY,
  column_1 TEXT,
  column_2 TEXT,
  column_3 TEXT,
  column_4 TEXT,
  column_5 TEXT
);

INSERT INTO table_name (column_1, column_2, column_3, column_4, column_5)
VALUES
  ('value_1_1', 'value_1_2', 'value_1_3', 'value_1_4', 'value_1_5'),
  ('value_2_1', 'value_2_2', 'value_2_3', 'value_2_4', 'value_2_5'),
  ('value_3_1', 'value_3_2', 'value_3_3', 'value_3_4', 'value_3_5'),
  ('value_4_1', 'value_4_2', 'value_4_3', 'value_4_4', 'value_4_5'),
  ('value_5_1', 'value_5_2', 'value_5_3', 'value_5_4', 'value_5_5'),
  ('value_6_1', 'value_6_2', 'value_6_3', 'value_6_4', 'value_6_5'),
  ('value_7_1', 'value_7_2', 'value_7_3', 'value_7_4', 'value_7_5'),
  ('value_8_1', 'value_8_2', 'value_8_3', 'value_8_4', 'value_8_5'),
  ('value_9_1', 'value_9_2', 'value_9_3', 'value_9_4', 'value_9_5'),
  ('value_10_1', 'value_10_2', 'value_10_3', 'value_10_4', 'value_10_5'),
  ('value_11_1', 'value_11_2', 'value_11_3', 'value_11_4', 'value_11_5'),
  ('value_12_1', 'value_12_2', 'value_12_3', 'value_12_4', 'value_12_5'),
  ('value_13_1', 'value_13_2', 'value_13_3', 'value_13_4', 'value_13_5'),
  ('value_14_1', 'value_14_2', 'value_14_3', 'value_14_4', 'value_14_5'),
  ('value_15_1', 'value_15_2', 'value_15_3', 'value_15_4', 'value_15_5'),
  ('value_16_1', 'value_16_2', 'value_16_3', 'value_16_4', 'value_16_5'),
  ('value_17_1', 'value_17_2', 'value_17_3', 'value_17_4', 'value_17_5'),
  ('value_18_1', 'value_18_2', 'value_18_3', 'value_18_4', 'value_18_5'),
  ('value_19_1', 'value_19_2', 'value_19_3', 'value_19_4', 'value_19_5'),
  ('value_20_1', 'value_20_2', 'value_20_3', 'calue_20_4', 'value_20_5');
